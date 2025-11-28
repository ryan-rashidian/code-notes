"""Demonstration of the Dependency Injection pattern."""

from typing import Callable


def export_to_csv(data) -> None:
    """Simulated export function."""
    print(f'{data} exported to /exports/data')


class APIWrapper:
    """Simulated API wrapper."""

    def request(self, endpoint: str) -> None:
        print(f'Requesting data from {endpoint}...')
        self.data = {'A': 1, 'B': 2, 'C': 3}

    def export(self, export_fn: Callable) -> None:
        export_fn(self.data)


if __name__ == '__main__':
    client = APIWrapper()
    client.request('endpoint/data')
    client.export(export_to_csv)

